//selected category match then show all images of that category.
function filterImages() 
{
    const category = document.getElementById("categorySelect").value;
    document.querySelectorAll('.image').forEach(image => {
        //using turnery operator.
        image.style.display=(category=='all'||image.dataset.category==category)?'block':'none'; 
    });
}

//click on image then shows in zoom or large image
function viewImage(img) 
{
    const modal = document.getElementById("imageModal");
    modal.style.display = "block";
    document.getElementById("img01").src = img.src;
}

//Closes the image
function closeModal() 
{
    document.getElementById("imageModal").style.display = "none";
}
  